// Định nghĩa các chân GPIO cho RGB LED
#define RED_PIN    16  // Chân GPIO 16 cho đèn đỏ
#define GREEN_PIN  17  // Chân GPIO 17 cho đèn xanh lá
#define BLUE_PIN   18  // Chân GPIO 18 cho đèn xanh dương

void setup() {
  // Khởi tạo cổng serial để giám sát thông tin
  Serial.begin(115200);
  Serial.println("Điều khiển RGB LED với ESP32");

  // Khởi tạo các chân GPIO cho RGB LED dưới dạng OUTPUT
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  // Thay đổi màu của RGB LED theo từng màu
  setColor(255, 0, 0); // Màu đỏ
  delay(1000);          // Giữ màu đỏ trong 1 giây
  
  setColor(0, 255, 0); // Màu xanh lá
  delay(1000);          // Giữ màu xanh lá trong 1 giây
  
  setColor(0, 0, 255); // Màu xanh dương
  delay(1000);          // Giữ màu xanh dương trong 1 giây
  
  setColor(255, 255, 0); // Màu vàng (đỏ + xanh lá)
  delay(1000);            // Giữ màu vàng trong 1 giây
  
  setColor(0, 255, 255); // Màu cyan (xanh lá + xanh dương)
  delay(1000);            // Giữ màu cyan trong 1 giây
  
  setColor(255, 0, 255); // Màu tím (đỏ + xanh dương)
  delay(1000);            // Giữ màu tím trong 1 giây
  
  setColor(255, 255, 255); // Màu trắng (đỏ + xanh lá + xanh dương)
  delay(1000);              // Giữ màu trắng trong 1 giây
  
  setColor(0, 0, 0);       // Tắt LED
  delay(1000);              // Giữ trạng thái tắt trong 1 giây
}

// Hàm để thiết lập màu RGB cho LED
void setColor(int red, int green, int blue) {
  analogWrite(RED_PIN, red);    // Điều chỉnh độ sáng đèn đỏ
  analogWrite(GREEN_PIN, green); // Điều chỉnh độ sáng đèn xanh lá
  analogWrite(BLUE_PIN, blue);  // Điều chỉnh độ sáng đèn xanh dương
}
