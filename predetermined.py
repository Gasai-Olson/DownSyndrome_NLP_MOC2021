import Songs,TTS
import playsound
import csv

class retriever:
    def __init__(self):
        while True:
            con = self.scan()
            if (con) != '':
                print(con)
                self.translate()
            else:
                pass
    def scan(self):
        rawinput = list()
        with open('/Users/timyc1/Desktop/Gabby/NLP_SEAVER/inputfornlp.csv', 'r') as file:
            file_reader = csv.reader(file)
            for row in file_reader:
                rawinput.append(row)
            file.close()
        try:
            lastcommand = (rawinput[-1])
            with open('/Users/timyc1/Desktop/Gabby/NLP_SEAVER/inputfornlp.csv', 'w+') as fi:
                fi.close()
            return lastcommand
        except:
            return ''
        

example = retriever()
example.scan()