# The Standard

This option is meant to replicate as closely as possible existing buzzer systems.

# Bill of Materials

Item | Qty. | Cost (unit) | Link
-----|------|-------------|-----
USB Female Type A Jack | 10 | $4.60 ($0.46) | [Mouser](https://www.mouser.com/ProductDetail/Stewart-Connector-Bel/SS-52100-001?qs=%2Fha2pyFadugSzPESUKpsiZ93CjnC39CUdt7g2fKnSWXCTI59Ff468g%3D%3D)
Arduino Nano | 1 | [[1]](#nano-pricing) | [[1]](#nano-pricing)
Controller PCB | 1 | 
Button PCB | 10 |
Buttons | 10 | 
Green LED | 10 | 
Red LED | 10 |
# Nano pricing
The issue is that genuine Arduino Nanos are very expensive (upwards of $20), which makes it unjustifiably expensive for a project on a budget. Using a Chinese clone is far cheaper, but buying a single unit can be extremely difficult. My suggestion (and what I did) was to get a pack of multiple from Amazon (just search for Arduino Nano and multiple options will appear). The unit price can be as low as $5, which is far better. You can then use the other Arduino Nano's for other projects, and they are very handy to have for all sorts of electronics projects. Another option is to buy directly from AliExpress, you can buy them for less than a dollar (which is much closer to the actual cost of the components being used). However, note that in this case shipping can take quite a long time (>50 days). No matter which option you choose, I highly suggest that you get a Nano which uses Micro-USB rather than Mini-USB as its primary connector, since Micro-USB cables are far more readily available. This is the same reason that the cables used for the buzzers are USB

# Cabling
In this design, USB Type A -> Type B Micro cables are used to connect the buzzers with the main controller. The reason why this is done is so that a single buzzer breaking won't render all of the other ones inoperable (as some daisy chained designs could be prone to)
Unfortunately, these cables also form a large part of the expense of the system if you are to buy all of them. If you are able to supply your own Type A -> Micro B cables (usually used for charging phones), then the project becomes much cheaper
