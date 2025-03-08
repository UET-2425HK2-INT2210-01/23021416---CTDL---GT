LỚP Stack
    BIẾN:
        arr        // Mảng lưu trữ các phần tử
        top        // Vị trí đỉnh ngăn xếp
        capacity   // Sức chứa tối đa của ngăn xếp

    HÀM Stack(size)
        capacity ← size
        arr ← tạo mảng kích thước capacity
        top ← -1

    HÀM isEmpty()
        TRẢ VỀ top = -1

    HÀM isFull()
        TRẢ VỀ top = capacity - 1

    HÀM push(value)
        NẾU isFull() THÌ
            HIỂN THỊ "Ngăn xếp đầy"
            DỪNG
        KẾT THÚC
        top ← top + 1
        arr[top] ← value

    HÀM pop()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            DỪNG
        KẾT THÚC
        top ← top - 1

    HÀM peek()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            TRẢ VỀ -1
        KẾT THÚC
        TRẢ VỀ arr[top]

    HÀM display()
        NẾU isEmpty() THÌ
            HIỂN THỊ "Ngăn xếp rỗng"
            DỪNG
        KẾT THÚC

        HIỂN THỊ "Ngăn xếp: "
        VỚI i TỪ top XUỐNG 0 LÀM
            HIỂN THỊ arr[i]
        KẾT THÚC
