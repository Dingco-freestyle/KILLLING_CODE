# 💻 Daily Algorithm Study

매일 한 문제씩 꾸준히 풀며 성장하는 알고리즘 스터디 공간입니다.  
서로의 코드를 리뷰하고 피드백을 주고받으며 올바른 문제 해결 습관을 기릅니다.

---

## 👥 스터디 멤버

| 이름 | 깃허브 |
|------|--------|
| woojin-archive | [@woojin-archive](https://github.com/woojin-archive) |
| jae-0 | [@jae-0](https://github.com/jae-0) |
| crazyKDH | [@crazyKDH](https://github.com/crazyKDH) |

---

## 📜 스터디 규칙

### 📅 진행 방식
- 매일 **1문제** 해결을 원칙으로 합니다.
- 일주일에 최대 **2번** 자유롭게 쉴 수 있습니다 (주 2회 패스).
- 쉬는 날에는 보드의 상태를 🌴(휴식)로 표시합니다.
- 주 **5문제** 이상 성공 시 완주로 인정합니다!

### ⏰ 기한 & 벌금
- 당일 PR 제출 기한: 매일 밤 **23시 59분**까지.
- 🌴 선언 없이 기한 내 미제출 시 🔴 **미출석** 처리.
- 🔴 미출석 **1건당 ₩1,000** 벌금이 부과됩니다.

### 💬 코드 리뷰
- PR 머지 전 스터디원 **최소 1명 이상의 Approve** 필수.
- 서로의 PR에 적극적으로 리뷰 및 피드백을 남깁니다.

| 상태 | 의미 |
|------|------|
| ✅ Approve | Merge 가능 |
| 🌴 패스 선언 | 휴식 처리 |
| 🔴 미출석 | 벌금 부과 |

---

## 📁 폴더 구조

```
algorithm-study/
├── README.md                        # 전체 메인 리드미
├── week_01/                         # 주차별 폴더
│   ├── README.md                    # 해당 주차 개인별 문제 리스트 및 결과
│   ├── [문제명]_[본인이름].py
│   └── [문제명]_[본인이름].java
├── week_02/
│   ├── README.md
│   └── ...
└── week_0N/
```

---

## 🚀 풀이 업로드 방법

> 처음 GitHub를 사용하는 팀원도 아래 순서대로 따라하면 됩니다.  
> 모든 작업은 **브랜치 생성 → 커밋 → Push → PR 생성 → 리뷰 → Merge** 순서로 진행합니다.

---

### Step 1. 레포지토리 클론 (처음 한 번만)

처음 시작할 때 organization 레포를 내 컴퓨터로 복사합니다.

```bash
# 레포 주소는 GitHub에서 Code 버튼 클릭 후 복사
git clone https://github.com/[organization]/[레포이름].git
cd [레포이름]
```

---

### Step 2. 최신 코드 받기 (매일 작업 전 필수)

다른 팀원이 올린 코드가 있을 수 있으니, 작업 전에 항상 최신 상태로 맞춥니다.

```bash
git pull origin main
```

> ⚠️ 이 단계를 건너뛰면 나중에 충돌(conflict)이 날 수 있습니다. 꼭 먼저 실행하세요!

---

### Step 3. 내 브랜치 만들기

작업은 항상 별도 브랜치에서 진행합니다. **main 브랜치에 직접 커밋하지 않습니다.**

**브랜치 이름 형식**
```
[이름]/week_[N]/[문제명]
```

예: `woojin/week_01/두수의합`

```bash
# 브랜치 생성 + 이동을 동시에
git checkout -b woojin/week_01/두수의합
```

---

### Step 4. 파일 추가 & 커밋

해당 주차 폴더에 풀이 파일을 넣고 커밋합니다.

**파일명 형식**: `[문제명]_[본인이름].[확장자]`  
예: `두수의합_woojin.py`

```bash
# week_01 폴더에 파일 저장 후
git add week_01/두수의합_woojin.py
git commit -m "week01 - 두수의합"
```

---

### Step 5. GitHub에 올리기 (Push)

내 브랜치를 GitHub에 업로드합니다. **23:59 전까지** 완료해야 합니다.

```bash
git push origin woojin/week_01/두수의합
```

---

### Step 6. Pull Request(PR) 생성

Push 후 GitHub 페이지에 접속하면 상단에 **"Compare & pull request"** 버튼이 나타납니다.  
클릭해서 PR을 만들어주세요.

**PR 제목 형식**
```
[week01] 두수의합 - woojin
```

- `base: main` ← `compare: 내 브랜치` 확인 후 **Create Pull Request** 클릭

> 💡 PR을 만들어야 팀원들이 리뷰할 수 있습니다. Push만 하면 안 됩니다!

---

### Step 7. 리뷰 & Merge

팀원 중 1명 이상이 **Approve**하면 Merge할 수 있습니다.  
Merge 방식은 **Squash and Merge**로 통일합니다.  
Merge 후에는 작업한 브랜치를 삭제합니다.

```bash
# Merge 후 로컬에서 브랜치 정리
git checkout main
git pull origin main
git branch -d woojin/week_01/두수의합
```

---

## 📋 전체 흐름 요약

```
1. git pull origin main          # 최신 코드 받기
2. git checkout -b [브랜치명]    # 브랜치 생성
3. git add [파일]                # 파일 스테이징
4. git commit -m "[메시지]"      # 커밋
5. git push origin [브랜치명]    # Push (23:59 전까지)
6. GitHub에서 PR 생성
7. 팀원 리뷰 & Approve → Merge
8. 브랜치 삭제
```
