# 숨좀쉬자(PleaseBreath) - Arduino ( IR Transmitter and etc )
> 공기 청정 기기를 제어하여 실내 환경을 쾌적하게 만드는 AI　공기 관리 솔루션

![pb](./image/pb.png)

## 파일 설명 

aircleaner_web_server & airconditioner_web_server - wifi를 통해 전송받은 string을 "&"로 split하여 ir송신.

                string은 구분자 "&"로 묶인 16진수 ircode들. ex) 0x48B7C837&0x48B78877&0x48B78877
                
humidifier_web_server - aircleaner_web_server & airconditioner_web_server + 가습기의 16진수 ircode에 대응하는 raw Data를 ir송신.




get_ircode - ir수신기 입력값 분석 결과를 serial monitor에 출력

## 실행 방법

Compile with Arduino IDE

## 업데이트 내역

* 0.0.1
    * 작업 진행 중
* 0.1.0
    * 웹 서버 구축
    * wifi 모듈 연결
    * ircode 송신


## 개발자

민필규 – pilgyu147@gmail.com

[https://github.com/pilgyumin](https://github.com/pilgyumin/)

안유진 - ujahnn@gmail.com

[https://github.com/ahnyujin](https://github.com/ahnyujin/)

조현학 - zhh102000@gmail.com

[https://git.swmgit.org/zhh1020](https://git.swmgit.org/zhh1020/)    