## 💖2024년 2학기 리턴 신입생 C++ 스터디💖

### 🎈깃허브 사용 가이드

1. 터미널에서 레포지토리를 저장할 경로로 이동합니다
   <br> 예: `cd "c://git"`

   <br>1-1. 윈도우는 Bash 권장: `우클릭 -> (추가 옵션 표시) -> Open Git Bash here`
   <br>1-2. `cd {경로}` 해당 경로로 이동
   <br>1-3. `cd ..` 상위 폴더로 이동
<br>

2. 본 레포지토리를 clone합니다
   <br> `git clone https://github.com/doyeon0307/return24-study.git`
   <br> ![image](https://github.com/user-attachments/assets/d710e155-49c4-4726-9d1a-5cd3cb78a710)
   <br> clone이 되면, 레포지토리가 폴더로 생성됩니다. `ls`로 확인합니다.
   <br> ![image](https://github.com/user-attachments/assets/c9c7ed47-2519-41e4-9381-2b185f035acb)
<br>

3. 자신의 이름으로 브랜치를 만듭니다
   <br>`git branch {이름}`
   <br>예: `git branch doyeon`
   > 브랜치는 한 번만 만듭니다. 이미 자신의 브랜치가 있다면 이 단계는 하지 않습니다.
   
   > 현재 경로가 레포지토리 디렉토리에 인지 확인하세요! clone 직후라면 `cd return24-study`로 디렉토리를 이동합니다.
   <br> ![image](https://github.com/user-attachments/assets/68fbc802-f198-41e3-9a5e-e468a48befbd)
<br>

4. 자신의 브랜치에서 과제를 수행하고 add/commit/push합니다
   <br> 7-1. `git checkout {이름}` 또는 `git switch {이름}`으로 자신의 브랜치로 이동합니다
   <br> 7-2. 여기서 C++ 프로젝트를 생성하고 코드를 작성합니다
   <br> 7-3. 과제를 완료하고 나면 add/commit/push합니다
   <br>
   <br> add : `git add .` (띄어쓰기 후 온점)
   <br> commit : `git commit -m "4회차 과제"`
   <br> push : `git push origin {브랜치명]` (예: `git push origin doyeon`)
   <br> ![image](https://github.com/user-attachments/assets/0ee43a47-9807-46ea-bd0e-efd352069d16)
<br>

5. github에서 pull request를 올립니다
   <br> push가 잘 되었다면, github 레포지토리에 들어왔을 때 pr 버튼이 보이게 됩니다
   <br> ![image](https://github.com/user-attachments/assets/69a7cdff-da43-4f55-8b00-7a5de267fada)
   <br> `base: main`, `compare: {내 브랜치}`를 확인하고 아래 `Create pull request` 버튼을 누르면 끝~
   <br> ![image](https://github.com/user-attachments/assets/3967f1f4-1e69-419b-b0f8-9ad85eb15a30)
<br>

7. 4-5를 반복합니다

### 🎈과제 제출 방법
