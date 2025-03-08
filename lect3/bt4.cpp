HÀM Queue()
    front ← NULL             // Con trỏ đầu hàng đợi
    rear ← NULL              // Con trỏ cuối hàng đợi
    size ← 0                 // Kích thước ban đầu = 0

HÀM isEmpty()
    TRẢ VỀ (size == 0)       // Kiểm tra hàng đợi rỗng

HÀM enqueue(value)
    newNode ← tạo Node mới với data = value
    NẾU isEmpty() THÌ
        front ← newNode
        rear ← newNode
    NGƯỢC LẠI
        rear.next ← newNode  // Nối Node mới vào cuối
        rear ← newNode       // Cập nhật lại rear
    KẾT THÚC
    size ← size + 1

HÀM dequeue()
    NẾU isEmpty() THÌ
        HIỂN THỊ "Hàng đợi rỗng"
        DỪNG
    KẾT THÚC
    temp ← front
    front ← front.next
    XÓA temp
    size ← size - 1
    NẾU front == NULL THÌ
        rear ← NULL
    KẾT THÚC

HÀM peek()
    NẾU isEmpty() THÌ
        HIỂN THỊ "Hàng đợi rỗng"
        TRẢ VỀ -1
    KẾT THÚC
    TRẢ VỀ front.data

HÀM display()
    NẾU isEmpty() THÌ
        HIỂN THỊ "Hàng đợi rỗng"
        DỪNG
    KẾT THÚC
    temp ← front
    HIỂN THỊ "Hàng đợi: "
    KHI temp ≠ NULL THÌ
        HIỂN THỊ temp.data
        temp ← temp.next
isEmpty()    O(1)	
enqueue(value)	O(1)	
dequeue()	O(1)	
peek()	O(1)	
display()	O(n)
    KẾT THÚC
