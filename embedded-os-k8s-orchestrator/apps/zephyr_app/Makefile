# Makefile for Zephyr Application

# Zephyr Application Makefile

# Define the name of the application
APP_NAME := zephyr_app

# Define the source files
SRC_FILES := main.c

# Define the build directory
BUILD_DIR := build

# Define the Zephyr base directory
ZEPHYR_BASE := /path/to/zephyr

# Include Zephyr's Makefile
include $(ZEPHYR_BASE)/Makefile.inc

# Targets
.PHONY: all clean

all: $(BUILD_DIR)/$(APP_NAME)

$(BUILD_DIR)/$(APP_NAME): $(SRC_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(BUILD_DIR)