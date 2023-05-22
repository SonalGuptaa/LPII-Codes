from datetime import datetime
import webbrowser

questions={
           "How are You":"I am fine",
           "Who are you":"I am a Bot",
           "What is your name?":"My name is ChatBot",
           "What can you do?":"I can answer your questions and help you with some tasks like opening websites",
           "What is the weather like?":"I'm sorry, I cannot answer that as I do not have access to weather information.",
           "What is the meaning of life?":"The meaning of life is a philosophical question that has been debated for centuries. As a bot, I cannot give you a definitive answer, but you can explore different ideas and perspectives to find your own meaning.",
           "What is the current time?":f"The current time is {datetime.now().strftime('%H:%M:%S')}",
           "What is the current date?":f"The current date is {datetime.now().strftime('%m/%d/%Y')}"
}

if __name__ == "__main__":
    print("Hello I am a ChatBot.")
    print("How can I help you?")
    while True:
        ques=input()
        if 'open google' in ques:
            webbrowser.open("-google.com")
        elif 'open youtube' in ques:
            webbrowser.open("youtube.com")
        elif 'open facebook' in ques:
            webbrowser.open("facebook.com")
        elif 'open Netflix' in ques:
            webbrowser.open("Netflix.com")
        elif 'open Linkedin' in ques:
            webbrowser.open("Linkedin.com")
        elif ques in questions.keys():
            print(questions[ques])
        else:
            print("Not a valid Question")

