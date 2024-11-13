## 💖2024년 2학기 리턴 신입생 C++ 스터디💖

### 🎈폴더 구조

자신의 브랜치명과 일치하는 `폴더`를 만들고, 그 안에서 작업하는 걸로 하겠습니다!

그렇지 않으면
1. 누가 쓴 코드인지 알기 어렵고
2. 혹시 파일명이 겹친다면 덮어 씌워질 위험이 있습니다

<br> 다른 폴더에서 이미 작업 했더라도 자기 이름 폴더로 프로젝트 파일을 옮긴 후에 `add` `commit` `push`해주시면 됩니당

---
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
   
   > 현재 경로가 레포지토리 디렉토리인지 확인하세요! clone 직후라면 `cd return24-study`로 이동합니다.
   <br> ![image](https://github.com/user-attachments/assets/68fbc802-f198-41e3-9a5e-e468a48befbd)
<br>

4. 자신의 브랜치에서 과제를 수행하고 add/commit/push합니다
   <br> 7-1. `git checkout {이름}` 또는 `git switch {이름}`으로 자신의 브랜치로 이동합니다
   <br> 7-2. 여기서 C++ 프로젝트를 생성하고 코드를 작성합니다
   <br> 7-3. 과제를 완료하고 나면 add/commit/push합니다
   <br>
   <br> add : `git add .` (띄어쓰기 후 온점)
   <br> commit : `git commit -m "4회차 과제"`
   <br> push : `git push origin {브랜치명}` (예: `git push origin doyeon`)
   <br> ![image](https://github.com/user-attachments/assets/0ee43a47-9807-46ea-bd0e-efd352069d16)
<br>

5. github에서 pull request를 올립니다
   <br> push가 잘 되었다면, github 레포지토리에 들어왔을 때 pr 버튼이 보이게 됩니다
   <br> ![image](https://github.com/user-attachments/assets/69a7cdff-da43-4f55-8b00-7a5de267fada)
   <br> `base: main`, `compare: {내 브랜치}`를 확인하고 아래 `Create pull request` 버튼을 누르면 끝~
   <br> ![image](https://github.com/user-attachments/assets/3967f1f4-1e69-419b-b0f8-9ad85eb15a30)
<br>

6. 4-5를 반복합니다
---
### 🎈다른 사람 코드 보는 법
자신의 브랜치에서 작업하고 `push`로 깃허브에서 파일을 업로드 했습니다
<br> `push`는 내 컴퓨터(로컬)의 파일을 리모트로 밀어 올리는 명령어라고 생각하시면 돼요

<br> 각자 `push`한 작업물은 `pr`을 통해 `main 브랜치`에 `merge`됩니다
<br> 즉, `main 브랜치`에 여러분들이 올린 파일들이 모두 모여 있는 거에요!

<br> 이 코드들을 내 컴퓨터(로컬)에서 보고 싶다면, `pull`하면 됩니다 (당겨오기)
1. `git fetch` (github 레포지토리에 변경사항이 생겼는지 확인)
2. `git pull` (github 상의 파일을 내 컴퓨터로 가져오기)
<br> 눈으로 확인만 할 거면 `main 브랜치`에서 해도 되고, 작업 환경에 반영하고 싶다면 `본인 브랜치`에서 하시면 됩니다
