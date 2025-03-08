CLASS Queue
    VARIABLES:
        arr       // Mảng lưu trữ các phần tử
        front     // Vị trí đầu hàng đợi
        rear      // Vị trí cuối hàng đợi
        capacity  // Sức chứa tối đa của hàng đợi
        size      // Số lượng phần tử hiện tại trong hàng đợi

    FUNCTION Queue(capacity):
        arr ← tạo mảng kích thước capacity
        front ← 0
        rear ← -1
        size ← 0

    FUNCTION isEmpty():
        RETURN size = 0

    FUNCTION isFull():
        RETURN size = capacity

    FUNCTION enqueue(value):
        IF isFull() THEN
            DISPLAY "Hàng đợi đầy"
            RETURN
        ENDIF
        rear ← (rear + 1) MOD capacity
        arr[rear] ← value
        size ← size + 1

    FUNCTION dequeue():
        IF isEmpty() THEN
            DISPLAY "Hàng đợi rỗng"
            RETURN
        ENDIF
        front ← (front + 1) MOD capacity
        size ← size - 1

    FUNCTION peek():
        IF isEmpty() THEN
            DISPLAY "Hàng đợi rỗng"
            RETURN -1
        ENDIF
        RETURN arr[front]

    FUNCTION display():
        IF isEmpty() THEN
            DISPLAY "Hàng đợi rỗng"
            RETURN
        ENDIF

        DISPLAY "Hàng đợi:"
        FOR i FROM 0 TO size-1 DO
            DISPLAY arr[(front + i) MOD capacity]
        ENDFOR

    FUNCTION freeMemory():
        GIẢI PHÓNG arr

