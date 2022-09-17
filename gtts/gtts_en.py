from gtts import gTTS

print("*********************************************")
print("*                                           *")
print("*               영어 발음기                 *")
print("*                                           *")
print("*********************************************", "\n")


text1 = input("영어만 입력하세요. 현 위치에 저장됩니다 : ")
text2 = input("저장 할 파일 이름을 정해주세요(확장자 없이) : ")
text3 = f"{text2}.mp3"

tts = gTTS(text=text1, lang = 'en')
    
tts.save(text3)
