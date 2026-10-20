# 통합 기록

통합일: 2026-10-20 (Asia/Seoul)

각 원본의 기본 브랜치 트리를 해당 하위 폴더에 그대로 배치했습니다.
원본 커밋을 병합 부모로 연결하여 커밋 해시와 전체 조상 기록을 보존했습니다.

| 원본 | 통합 폴더 | 원본 브랜치 | 커밋 수 | 파일 수 | 원본 HEAD | 원본 트리 |
| --- | --- | --- | ---: | ---: | --- | --- |
| thepool | piscine | master | 19 | 347 | `2933724e75abf39326a4a22a6e9d0f9c89b7d8b2` | `422a9375889f5f2d82fd4ea8a4a3c5ed0c47c4dc` |
| libft | libft | main | 11 | 46 | `ec517ee5f24eabfd2ca1d0b5d0a306939ed3c699` | `c82584cb9bd1c93517ae88864ca6325191ed735f` |
| printf | printf | main | 7 | 7 | `6a2fc01b63f680722e06936e77f5f1aacb02dc66` | `114321b7d6b626b104a859d8b1ab94a0eb9edd90` |
| get_next_line | get_next_line | main | 10 | 7 | `9f888c2eac72b766489b662b97943cc09ac52d0d` | `8312296fe0dfdb831fa55786b93b7d87d335b4e0` |
| push_swap | push_swap | main | 12 | 25 | `a651e15fb39354e6887a654bf8f5b611716c7f82` | `7057ce138970e0697ae8e2a651f4de6913750328` |

## 검증 방식

- 통합 하위 폴더와 원본 루트의 Git 트리 해시 일치 여부 확인
- 모든 원본 브랜치 HEAD가 보관 브랜치에 동일한 해시로 존재하는지 확인
- 기본 브랜치 전체 커밋이 main에서 도달 가능한지 확인
- git fsck --full로 Git 객체 무결성 확인

빌드와 실행 테스트는 수행하지 않았습니다. 기존 소스 및 빌드 설정을 보존했습니다.
Windows에서 허용하지 않는 피신 파일명도 변경 없이 보존했습니다.
