이번 문제는 꽤 중요한 사실을 알았다.

입력이 없으면 동작하지 않고 종료되는 것을 구현하는 것인데

  while(1){
  
  cin>>a>>b;
  
  }
  
  
이런식으로 하면 안되는게 입력을 받을때까지 종료가 안된다.

그래서 방법이

while(cin>>a>>b)


이런식으로 while 안에 넣어준다면 

입력을 넣어주기 전까진 종료가 된 상태인것이다.

엄밀히 말하면 종료가 안된것이라고도 말할 수 있겠지만


위에 두 코드에는 분명한 차이가 있다.
