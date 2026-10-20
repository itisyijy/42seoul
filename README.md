# 42 Seoul

42서울 피신과 본과정 과제를 모은 저장소입니다.
원본 5개 저장소의 과제 파일과 커밋 기록을 보존하여 통합했습니다.
과거 기록에 포함된 `token.txt`는 보안상 제거하여 관련 커밋 해시가 변경되었습니다.

## 과제 목록

| 폴더 | 내용 | 원본 저장소 |
| --- | --- | --- |
| [piscine](piscine/) | 피신: C, Shell, Rush 과제 | [thepool](https://github.com/itisyijy/thepool) |
| [libft](libft/) | C 표준 함수와 연결 리스트 구현 | [libft](https://github.com/itisyijy/libft) |
| [printf](printf/) | printf 함수 구현 | [printf](https://github.com/itisyijy/printf) |
| [get_next_line](get_next_line/) | 파일 디스크립터에서 한 줄씩 읽기 | [get_next_line](https://github.com/itisyijy/get_next_line) |
| [push_swap](push_swap/) | 두 스택을 이용한 정렬 | [push_swap](https://github.com/itisyijy/push_swap) |

## 사용 방법

```sh
git clone https://github.com/itisyijy/42seoul.git
cd 42seoul
```

각 과제는 해당 폴더에서 개별적으로 확인합니다.
기존 소스와 Makefile을 그대로 보존했으며, 통합 빌드는 제공하지 않습니다.
과거 학습 코드를 보관한 저장소로, 빌드 및 과제 통과 여부는 보장하지 않습니다.

피신 Shell 과제에는 Windows 파일 시스템에서 허용하지 않는 이름이 있습니다.
전체 파일을 체크아웃하려면 Linux, macOS 또는 WSL의 Linux 파일 시스템을 사용하세요.

## 커밋 기록

- 각 원본 기본 브랜치의 전체 기록을 병합 부모로 연결했습니다.
- 작성자, 작성 시각, 커밋 메시지 및 과제 파일 내용을 유지했습니다.
- `token.txt` 제거의 영향을 받는 커밋은 해시가 변경되었습니다.
- 원본 브랜치는 `archive/<저장소>/<브랜치>` 이름으로 보존했습니다.
- 원본 저장소는 별도로 유지되며, 이후 변경 사항은 자동 동기화되지 않습니다.
- 이슈, PR, 스타와 같은 GitHub 메타데이터는 원본 저장소에 남습니다.

## 통합 검증

원본별 커밋과 파일 수, 트리 해시는 [통합 기록](docs/MIGRATION.md)에 정리했습니다.
파일 내용, 실행 권한, 원본 커밋의 도달 가능성 및 Git 객체 무결성을 검증했습니다.
소스 코드 수정과 빌드 오류 수정은 이번 통합 범위에 포함하지 않았습니다.
