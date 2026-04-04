Markdown
# 🛠️ Concept: Associative Containers - std::map

> **核心目標**：解決「一對一」或「一對多」的資料映射問題，特別是在處理字串統計、字典查詢時，能自動完成排序與去重。

---

## 📐 底層原理與邏輯

### 1. 資料結構：紅黑樹 (Red-Black Tree)
`std::map` 的底層是一個**平衡二元搜尋樹**（Balanced BST）。
* **自動排序**：每插入一個元素，`map` 都會根據 **Key (鍵)** 的大小自動調整位置。因此，當你遍歷 `map` 時，資料會按照 Key 從小到大（字典序）排列。
* **時間複雜度**：
  * 搜尋、插入、刪除均為 $O(\log N)$。
  * 若資料量極大且不需要排序，可改用 `unordered_map` ($O(1)$)，但 CPE 題目通常要求按順序輸出。



### 2. Key-Value 映射邏輯
每一個元素都是一個 `std::pair`，包含兩個部分：
* **first (Key)**：唯一的識別碼，不可重複。
* **second (Value)**：該識別碼對應的資料內容。



---

## 📊 分類與對比

| 特性 | std::map | std::unordered_map | std::multimap |
| :--- | :--- | :--- | :--- |
| **底層結構** | 紅黑樹 (BST) | 哈希表 (Hash Table) | 紅黑樹 |
| **排序性** | **有** (自動依 Key 排序) | 無 | 有 |
| **Key 重複性** | 不允許重複 | 不允許重複 | **允許重複** |
| **平均時間複雜度** | $O(\log N)$ | $O(1)$ | $O(\log N)$ |
| **適用場景** | 需要按順序輸出結果 | 只求快速查找，不計順序 | 一個 Key 對應多個資料 |

---

## 🛠️ 必備語法與操作邏輯

### 1. 初始化與宣告
```cpp
#include <map>
#include <string>

std::map<string, int> countMap; // Key 是字串, Value 是整數
2. 存取與修改 (Operator [])
這是最直覺的用法，若 Key 不存在，會自動建立並賦予初始值（如 0 或空字串）。

C++
countMap["Taiwan"]++; // 如果 Taiwan 不存在，會建立它並讓值從 0 變 1
3. 遍歷 (Iteration)
使用 Auto-loop (C++11) 是複習時最快的方法：

C++
for (auto const& [key, val] : countMap) {
    cout << key << " " << val << endl;
}
4. 查找與清空
m.count(key)：回傳 1 或 0，用來判斷 Key 是否存在。

m.clear()：清空整個容器，處理多筆測資時必備。

🧠 進階邏輯：與 Stringstream 聯手
在 CPE 中，map 經常搭配 getline() 與 stringstream。

邏輯步驟：

getline 讀取整行字串。

stringstream 切割出關鍵單字。

將單字丟進 map 進行統計。

📌 實戰關聯題目 (Related Problems)
UVA 10420 - List of Conquests

邏輯：統計每個國家出現的人數。使用 map<string, int>，自動幫你處理國家的字母排序與次數累加。

UVA 10226 - Hardwood Species

邏輯：統計森林中各樹種佔的百分比。Key 為樹種名稱，Value 為出現次數，最後遍歷輸出並計算百分比。

UVA 10082 - WERTYU

邏輯：雖然可用陣列，但用 map<char, char> 建立鍵盤位移映射會更直覺。