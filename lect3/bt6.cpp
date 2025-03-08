LỚP Stack
    BIẾN:
        top  // Con trỏ tới đỉnh ngăn xếp
    
    HÀM Stack()
        top ← NULL

    HÀM isEmpty()
        TRẢ VỀ top = NULL

    HÀM push(value)
        newNode ← tạo Node mới với data = value
        newNode.next ← top
        top ← newNode

    HÀM pop() 
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            DỪNG
        KẾT THÚC
        temp ← top
        top ← top.next
        XÓA temp

    HÀM peek()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            TRẢ VỀ -1
        KẾT THÚC
        TRẢ VỀ top.data

    HÀM display()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            DỪNG
        KẾT THÚC
        temp ← top
        HIỂN THỊ "Ngăn xếp:"
        KHI temp ≠ NULL THÌ
            HIỂN THỊ temp.data
            temp ← temp.next
push	O(1)
pop	O(1)
peek	O(1)
isEmpty	O(1)
display	O(n)
        KẾT THÚC
