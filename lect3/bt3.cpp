LỚP Queue
    BIẾN:
        arr       // Mảng lưu trữ các phần tử
        front     // Vị trí đầu hàng đợi
        rear      // Vị trí cuối hàng đợi
        capacity  // Sức chứa tối đa của hàng đợi
        size      // Số lượng phần tử hiện tại trong hàng đợi

    HÀM Queue(capacity)
        arr ← tạo mảng kích thước capacity
        front ← 0
        rear ← -1
        size ← 0

    HÀM isEmpty()
        TRẢ VỀ size = 0

    HÀM isFull()
        TRẢ VỀ size = capacity

    HÀM enqueue(value)
        NẾU isFull() THÌ
            HIỂN THỊ "Hàng đợi đầy"
            DỪNG
        KẾT THÚC
        rear ← (rear + 1) MOD capacity
        arr[rear] ← value
        size ← size + 1

    HÀM dequeue()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Hàng đợi rỗng"
            DỪNG
        KẾT THÚC
        front ← (front + 1) MOD capacity
        size ← size - 1

    HÀM peek()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Hàng đợi rỗng"
            TRẢ VỀ -1
        KẾT THÚC
        TRẢ VỀ arr[front]

    HÀM display()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Hàng đợi rỗng"
            DỪNG
        KẾT THÚC

        HIỂN THỊ "Hàng đợi:"
        VỚI i TỪ 0 ĐẾN size - 1 LÀM
            HIỂN THỊ arr[(front + i) MOD capacity]
        KẾT THÚC

    HÀM freeMemory()
Queue()	O(1)
isEmpty()	O(1)
isFull()	O(1)
enqueue(value)	O(1)
dequeue()	O(1)
peek()	O(1)
display()	O(n)
        GIẢI PHÓNG arr
