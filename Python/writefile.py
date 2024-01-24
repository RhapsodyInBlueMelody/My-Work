


def writeFile():
    text=input("Ketik: ");
    a = open("text.txt", "a");
    a.write(text + '\n')
    a.close();

def callName():
    a = open("text.txt", "r");
    print("="*10 +"Daftar Nama"+ "="*10 + '\n' + a.read())
    a.close

def cleanText():
    a = open("text.txt", "w");
    a.write("")
    a.close

def ask():
    apa=input("What do you want to do? Write/Read/Clear (W/R/C): ")
    if(apa == "R"): callName();
    elif(apa == "W"): writeFile();
    elif(apa == "C"): cleanText();

ask()
