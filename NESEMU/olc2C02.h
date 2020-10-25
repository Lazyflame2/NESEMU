#pragma once
class olc2C02
{
public:
	olc2C02();
	~olc2C02();

	// Communication with Main Bus
	uint8_t cpuRead(uint16_t addr, uint8_t &data);
	void cpuWrite(uint16_t addr, uint8_t data);

	// Communication with Main Bus
	uint8_t ppuRead(uint16_t addr, uint8_t &data);
	void ppuWrite(uint16_t addr, uint8_t data);

private:
	// The Cartridge or "GamePak"
	std::shared_ptr<Cartridge> cart;

public:
	// Interface
	void ConnectCartridge(const std::shared_ptr<Cartridge>& cartridge);
	void clock();
};

