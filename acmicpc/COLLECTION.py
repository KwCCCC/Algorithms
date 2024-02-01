import requests
from bs4 import BeautifulSoup

def get_boj_number(problem_name):
    search_url = f"https://www.acmicpc.net/search#q={problem_name}&c=Problems"
    response = requests.get(search_url, headers={'User-Agent': 'Mozilla/5.0'}).text
    print(response)
    soup = BeautifulSoup(response, "html.parser")
    
    # 검색 결과에서 첫 번째로 나오는 문제의 링크에서 문제 번호 가져오기
    first_result = soup.select_one("#result > div.results > div:nth-child(1) > h3 > a")
    print(first_result)
    if first_result:
        problem_url = first_result['href']
        problem_number = problem_url.split("/")[-1]
        return problem_number
    else:
        return None

# 예시: "사탕 게임"이라는 문제의 백준 번호 구하기
problem_name = "사탕 게임"
boj_number = get_boj_number(problem_name)

if boj_number:
    print(f"백준 문제 '{problem_name}'의 번호: {boj_number}")
else:
    print(f"백준 문제 '{problem_name}'을 찾을 수 없습니다.")


import requests
from bs4 import BeautifulSoup

# 문제 목록
problems = [
    "일곱 난쟁이", "사탕 게임", "날짜 계산", "리모컨", "테트로미노", "카잉 달력", "수 이어 쓰기 1", "1, 2, 3 더하기",
    "N과 M (1)", "N과 M (2)", "N과 M (3)", "N과 M (4)", "N과 M (5)", "N과 M (6)", "N과 M (7)", "N과 M (8)", "N과 M (9)", "N과 M (10)", "N과 M (11)", "N과 M (12)",
    "다음 순열", "이전 순열", "모든 순열", "차이를 최대로", "외판원 순회 2", "로또",
    "1, 2, 3 더하기", "암호 만들기", "퇴사", "스타트와 링크", "링크와 스타트", "부등호", "맞춰봐",
    "집합", "부분수열의 합", "스타트와 링크", "종이 조각",
    "ABCDE", "DFS와 BFS", "연결 요소의 개수", "이분 그래프", "단지번호붙이기", "섬의 개수", "미로 탐색", "토마토",
    "Two Dots", "서울 지하철 2호선",
    "BFS 스페셜 저지", "DFS 스페셜 저지", "다리 만들기",
    "숨바꼭질", "숨바꼭질 4", "이모티콘", "숨바꼭질 3", "알고스팟",
    "트리 순회", "트리의 높이와 너비", "트리의 부모 찾기", "트리의 지름"
]

# 문제 번호를 찾아서 백준 링크와 solved.ac 티어 정보를 가져오는 함수
def get_problem_info(problem_name):
    url = f"https://www.acmicpc.net/problem/{problem_name}"

    # 백준 문제 페이지에서 solved.ac 티어 정보 가져오기
    response = requests.get(url)
    soup = BeautifulSoup(response.text, "html.parser")
    tier_info = soup.select_one(".problem-status span")
    tier = tier_info.text.strip() if tier_info else "Unknown"

    return f"* **[{problem_name}]({url})** - {tier}"

# 문제들을 백준 번호와 함께 정렬
sorted_problems = sorted(problems, key=lambda x: int(x.split()[0]) if x.split()[0].isdigit() else float('inf'))

# Markdown 소스 생성
markdown_source = "\n".join([get_problem_info(problem) for problem in sorted_problems])

print(markdown_source)
