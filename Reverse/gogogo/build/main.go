// flag{69da7387-c810-48d0-ac22-c9a3477f5dff}
// PhxRDhVCYRRRXl1Mb11TUV9EdUQIDV5ZORMCW0MXYREDXVlDPkVUDwgJ

package main

import (
	"bufio"
	"strings"
	"fmt"
	"os"
	b64 "encoding/base64"
)

func main() {
	var input string
	var err error
	var inputReader *bufio.Reader
	var input_bytes []byte
	key := [6]uint8{88, 112, 48, 105, 110, 116}
	yeyeye := "PhxRDhVCYRRRXl1Mb11TUV9EdUQIDV5ZORMCW0MXYREDXVlDPkVUDwgJ"

	inputReader = bufio.NewReader(os.Stdin)
	fmt.Printf("Input: ")
	input, err = inputReader.ReadString('\n')

	if err != nil {
		os.Exit(0)
	}

	trim_input := strings.Trim(input, "\n")
	input_bytes = []byte(trim_input)

	for i := 0; i < len(input_bytes); i++ {
		input_bytes[i] ^= key[i % len(key)]
	}

	encode_str := b64.StdEncoding.EncodeToString(input_bytes)
	// fmt.Println(encode_str)

	cmp_result := strings.Compare(encode_str, yeyeye)

	if cmp_result == 0 {
		fmt.Printf("you find it, flag is %s\n", trim_input)
	} else {
		fmt.Printf("try again\n")
	}
	
}