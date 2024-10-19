# Nearest Multiple of 10 🎯

![Microsoft Logo](https://mailmeteor.com/logos/assets/PNG/Microsoft_Logo_256px.png)  


## Problem Overview 📊
This program rounds a positive integer represented as a string to the nearest multiple of 10. If the number is equidistant from two multiples of 10, the program selects the smaller one.

### Difficulty: Easy 🟢
- **Accuracy**: 19.32%
- **Submissions**: 47K+
- **Points**: 2

---

## Input and Output 📥📤

### Input
- A string `str` representing a positive integer. 🧮

### Output
- A string representing the rounded number to the nearest multiple of 10. 🔢

### Examples

1. **Input**: `"29"`  
   **Output**: `"30"`  
   **Explanation**: The closest multiples are `20` and `30`, with `30` being nearest to `29`. 🔄

2. **Input**: `"15"`  
   **Output**: `"10"`  
   **Explanation**: `10` and `20` are equally distant, but the smallest is `10`. 🏅

---

## Expected Complexity 🧩
- **Time Complexity**: O(n)
- **Auxiliary Space**: O(1)

### Constraints
- `1 <= str.size() <= 10^5` 📏

---

## Algorithm Steps 🛠️

### 1. Determine the Last Digit 🔍
- Check the last digit of `str` to decide the rounding direction:
  - **If less than or equal to `5`**: Round **down**. 👇
  - **If greater than `5`**: Round **up**. ⬆️

### 2. Rounding Down ⚖️
- Set the last digit to `'0'`.

### 3. Rounding Up 🌠
- Change the last digit to `'0'`.
- Handle carry for preceding digits if the last digit was `9`:
  - Change `9` to `0` and move left until a non-`9` digit is found.
- If all digits are `9`, prepend `1` to the string.

---

## Detailed Examples 📚

### Example 1
- **Input**: `"29"`
- **Process**:
  - Last digit is `9` (greater than `5`). 🔟
  - Set last digit to `0`: `str` becomes `"20"`.
  - Increment the previous digit (`2`) to get `3`. ➕
- **Output**: `"30"` 🎉

### Example 2
- **Input**: `"15"`
- **Process**:
  - Last digit is `5` (equal to `5`). ⚖️
  - Set last digit to `0`: `str` becomes `"10"`.
- **Output**: `"10"` 🥇

### Example 3
- **Input**: `"999"`
- **Process**:
  - Last digit is `9` (greater than `5`). 🔟
  - Set last digit to `0`: `str` becomes `"900"`.
  - Previous digit is also `9`, change it to `0`: `str` becomes `"800"`.
  - Repeat until reaching the start of the string.
- **Final Step**: Prepend `1` to form `"1000"`. 🚀
- **Output**: `"1000"` 🎊

---

## Conclusion 🏁
This program effectively rounds a positive number represented as a string to the nearest multiple of 10, adhering to simple rounding rules. It handles edge cases where carries are necessary and ensures accurate outputs for various scenarios.

---

## Author 👤
For questions or further clarifications, feel free to contact me at [rajanrp115@gmail.com](mailto:rajanrp115@gmail.com).

## Additional Resources 📖
- [Rounding Rules](https://www.mathsisfun.com/numbers/rounding-numbers.html)  
  A simple explanation of rounding rules to help understand the concept better.

---

## Need Help? 🙋
- For doubts, reach out via:
  - **WhatsApp**: [Chat on WhatsApp](https://wa.me/9545993850)  
  - **YouTube**: [Watch on YouTube](https://youtu.be/1GjoGuOBukc?si=6a5HBzuXlTv9EUgp)  
