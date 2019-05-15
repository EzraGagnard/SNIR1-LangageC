/*
  DHCP-based IP printer
*/

//       EXERCICE 4-1

/*
  DHCP-based IP printer


#include <LwIP.h>
#include <STM32Ethernet.h>

// Enter a MAC address for your controller below.
byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xE5}; //Le dernier chiffre du dernier hexa est                     //changer selon l’adresse mac
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  // start the Ethernet connection:

  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
    while (1) {}
  }
  // print your local IP address:
  Serial.println(Ethernet.localIP());
  Serial.println(Ethernet.subnetMask());
  Serial.println(Ethernet.gatewayIP());
  Serial.println(Ethernet.dnsServerIP());

}

void loop() {

}
*/

//       EXERCICE 4-2

/*
  Fixed IP printer
 */

#include <LwIP.h>
#include <STM32Ethernet.h>

// Enter a MAC address for your controller below.
byte mac[] = {0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xE5};

IPAddress ip(     );

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  // start the Ethernet connection:

  Ethernet.begin(     );

  // print your local IP address:
  Serial.println(Ethernet.localIP());

}

void loop() {
 
}
