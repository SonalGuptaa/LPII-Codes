#include <iostream>
#include <vector>

using namespace std;

void calculateTAT_CT(const vector<int>& process_arr, const vector<int>& arrival_arr, const vector<int>& burst_arr, vector<int>& tat_arr, vector<int>& ct_arr) {
    int n = process_arr.size();

    // Initialize the completion time of the first process
    ct_arr[0] = burst_arr[0];

    // Calculate the completion time for each process
    for (int i = 1; i < n; i++) {
        // The completion time of the current process is the sum of its burst time and the completion time of the previous process
        ct_arr[i] = burst_arr[i] + ct_arr[i - 1];
    }

    // Calculate the turnaround time for each process
    for (int i = 0; i < n; i++) {
        tat_arr[i] = ct_arr[i] - arrival_arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<int> process_arr(n);
    vector<int> arrival_arr(n);
    vector<int> burst_arr(n);
    vector<int> tat_arr(n);
    vector<int> ct_arr(n);

    cout << "Enter the arrival time and burst time for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << ":\n";
        cout << "Arrival time: ";
        cin >> arrival_arr[i];
        cout << "Burst time: ";
        cin >> burst_arr[i];
        process_arr[i] = i + 1;  // Assigning process numbers
    }

    calculateTAT_CT(process_arr, arrival_arr, burst_arr, tat_arr, ct_arr);

    // Displaying the turnaround time (TAT) and completion time (CT) for each process
    cout << "\nProcess\tArrival Time\tBurst Time\tTAT\tCT\n";
    for (int i = 0; i < n; i++) {
        cout << process_arr[i] << "\t" << arrival_arr[i] << "\t\t" << burst_arr[i] << "\t\t" << tat_arr[i] << "\t" << ct_arr[i] << endl;
    }

    return 0;
}
