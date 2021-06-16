#문제4

단어들이 들어있는 배열에서 길이가 5 이상인 단어를 배열에 들어있는 순서대로 이어 붙이려 합니다.

예를 들어 배열이 다음과 같은 경우

["my", "favorite", "color", "is", "violet"]

"favoritecolorviolet"을 만들면 됩니다.

단어들이 들어있는 배열 words와 words의 길이 words_len이 solution 함수의 매개변수로 주어질 때, 길이가 5 이상인 단어를 순서대로 이어 붙인 문자열을 return 하도록 solution 함수를 완성해주세요.

---
#####매개변수 설명
단어들이 들어있는 배열 words와 words의 길이 words_len이 solution 함수의 매개변수로 주어집니다.

* words_len은 1 이상 100 이하의 자연수입니다.
* words에 들어있는 각 단어의 길이는 1 이상 10 이하이며, 알파벳 소문자로만 이루어져 있습니다.

---
#####return 값 설명
길이가 5 이상인 단어를 순서대로 이어 붙여 return 해주세요.
* 만약 return 할 문자열이 빈 문자열이면 "empty"를 return 해주세요.

---
#####예시

| words                                       | words_len | return                |
|---------------------------------------------|-----------|-----------------------|
| ["my", "favorite", "color", "is", "violet"] | 5         | "favoritecolorviolet" |
| ["yes", "i", "am"]                          | 3         | "empty"               |

#####예시 설명
예시 #1
길이가 5 이상인 단어는 "favorite", "color", "violet" 입니다. 이를 배열에 들어있는 순서대로 이어 붙이면 "favoritecolorviolet"이 됩니다.

예시 #2
길이가 5 이상인 단어가 없으므로 "empty"를 return 하면 됩니다.
