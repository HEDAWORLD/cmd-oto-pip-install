@echo off 
echo islem baslatiliyor...
timeout /t 1 >nul

echo Pip güncelleniyor...
python.exe -m pip install --upgrade pip
timeout /t 1 >nul

echo Gerekli kütüphaneler yükleniyor...
pip install mss numpy keyboard mouse pyserial pywin32 opencv-python-headless opencv-python pillow requests tk python-imagesearch mysql-connector-python pyfirmata beautifulsoup4 lxml pyautogui schedule screeninfo pyarmor
timeout /t 1 >nul

echo islem tamamlandi.
pause
