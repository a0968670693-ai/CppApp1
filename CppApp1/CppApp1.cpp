#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    int quantity;
    int total = 0;
    char continueOrdering;

    cout << "===== 歡迎使用 Gemini 快速點餐系統 =====" << endl;

    do {
        // 1. 顯示菜單 (使用選擇結構的基礎)
        cout << "\n今日菜單：" << endl;
        cout << "1. 牛肉堡 - $120" << endl;
        cout << "2. 雞肉捲 - $80" << endl;
        cout << "3. 大杯可樂 - $40" << endl;
        cout << "4. 薯條 - $50" << endl;
        cout << "請輸入編號選擇餐點: ";
        cin >> choice;

        // 2. 判斷餐點與金額 (使用 switch 結構)
        int price = 0;
        switch (choice) {
        case 1:
            price = 120;
            cout << "您選擇了牛肉堡。";
            break;
        case 2:
            price = 80;
            cout << "您選擇了雞肉捲。";
            break;
        case 3:
            price = 40;
            cout << "您選擇了大杯可樂。";
            break;
        case 4:
            price = 50;
            cout << "您選擇了薯條。";
            break;
        default:
            cout << "無效的編號，請重新選擇。" << endl;
            continue; // 跳過本次迴圈剩餘部分，重新詢問
        }

        cout << "請輸入數量: ";
        cin >> quantity;

        // 3. 計算運算 (使用運算子: * 和 +=)
        total += (price * quantity);

        cout << "目前累計金額: $" << total << endl;
        cout << "還要繼續點餐嗎？(y/n): ";
        cin >> continueOrdering;

    } while (continueOrdering == 'y' || continueOrdering == 'Y'); // 使用邏輯運算子 ||

    // 4. 最後結帳
    cout << "\n----------------------------" << endl;
    cout << "訂單完成！您的總消費金額為: $" << total << endl;

    // 使用三元運算子判斷是否有折扣 (滿 500 打九折)
    if (total >= 500) {
        double discounted = total * 0.9;
        cout << "符合滿500元優惠！打九折後為: $" << (int)discounted << endl;
    }

    cout << "感謝您的光臨！" << endl;

    return 0;
}