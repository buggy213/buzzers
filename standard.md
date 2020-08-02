# The Standard

This option is meant to replicate as closely as possible existing buzzer systems.

# Bill of Materials

Item | Qty. | Cost (unit) | Link
-----|------|-------------|-----
USB Female Type A Jack | 10 | $4.60 ($0.46) | [Mouser](https://www.mouser.com/ProductDetail/Stewart-Connector-Bel/SS-52100-001?qs=%2Fha2pyFadugSzPESUKpsiZ93CjnC39CUdt7g2fKnSWXCTI59Ff468g%3D%3D)
USB Female Type B Micro Jack | 10 | $3.20 ($0.32) | [Mouser](https://www.mouser.com/ProductDetail/Amphenol-FCI/10118194-0001LF?qs=Ywefl8B65e4FIdY8OWfRQA%3D%3D)
Arduino Nano | 1 | [[1]](#nano-pricing) | [[1]](#nano-pricing)
Shift register | 1 | $0.57 ($0.57) | [Mouser](https://www.mouser.com/ProductDetail/Texas-Instruments/SN74HC595NE4?qs=AgY10sKTvDK0jki9CKjSwg%3D%3D)
Controller PCB | 1 | [[3]](#to-pcb-or-not-to-pcb) | [[3]](#to-pcb-or-not-to-pcb)
Button PCB | 10 | [[3]](#to-pcb-or-not-to-pcb) | [[3]](#to-pcb-or-not-to-pcb)
Buttons | 11 | [[2]](#switches) | [[2]](#switches)
Keycaps (if you are using keyboard switches) | 10 | [[2]](#switches) | [[2]](#switches)
Green LED | 10 | $0.80 ($0.08) | [Mouser](https://www.mouser.com/ProductDetail/Lite-On/LTL-4233?qs=ijkchSGtXvuwP2%252BANDTHYA%3D%3D)
Red LED | 10 | $0.80 ($0.08) | [Mouser](https://www.mouser.com/ProductDetail/Lite-On/LTL-307EE?qs=Yz4wJs0d%252BpgyXm%2FpkMp2pg%3D%3D)
470 Ohm Resistors | 11 | $1.10 ($0.10) | [Mouser](https://www.mouser.com/ProductDetail/KOA-Speer/MOS1CT528R471J?qs=sGAEpiMZZMsPqMdJzcrNwrSrS5p3UYvSx4lek78YviwZPrGJmBe5kA%3D%3D)
USB Male Type A -> Male Micro Cable | 10 | $22.70 ($2.27) | [Mouser](https://www.mouser.com/ProductDetail/Stewart-Connector-Bel/SC-2AMK006F?qs=r5DSvlrkXmLzpb5AnoBsPQ%3D%3D)
Piezo Buzzer | 1 | $0.76 ($0.76) | [Mouser](https://www.mouser.com/ProductDetail/CUI-Devices/CEM-120150?qs=WyjlAZoYn51FAmKB185MGw%3D%3D)
120 Ohm Resistor (for piezo) | 1 | $0.10 ($0.10) | [Mouser](https://www.mouser.com/ProductDetail/KOA-Speer/MOS1CT528R121J?qs=sGAEpiMZZMsPqMdJzcrNwrSrS5p3UYvS%252BqwuJpWeSDqyFMFIpB2bmg%3D%3D)
(Optional) PDIP-16 Socket | 1 | $0.26 ($0.26) | [Mouser](https://www.mouser.com/ProductDetail/TE-Connectivity/1-2199298-4?qs=fK8dlpkaUMvpL10rY9Abiw%3D%3D)
(Optional) PDIP-32 Socket | 1 | $0.79 ($0.79) | [Mouser](https://www.mouser.com/ProductDetail/3M-Electronic-Solutions-Division/4832-6000-CP?qs=IGgAdOvCTsS5qvliUkcdSg%3D%3D)

# Nano pricing
The issue is that genuine Arduino Nanos are very expensive (upwards of $20), which makes it unjustifiably expensive for a project on a budget. Using a Chinese clone is far cheaper, but buying a single unit can be extremely difficult. My suggestion (and what I did) was to get a pack of multiple from Amazon (just search for Arduino Nano and multiple options will appear). The unit price can be as low as $5, which is far better. You can then use the other Arduino Nano's for other projects, and they are very handy to have for all sorts of electronics projects. Another option is to buy directly from AliExpress, you can buy them for less than a dollar (which is much closer to the actual cost of the components being used). However, note that in this case shipping can take quite a long time (>50 days). No matter which option you choose, I highly suggest that you get a Nano which uses Micro-USB rather than Mini-USB as its primary connector, since Micro-USB cables are far more readily available. This is the same reason that the cables used for the buzzers are USB

# Switches
I would recommend getting Cherry MX Switches (the kind used on mechanical keyboards) because they are relatively cheap and provide a good tactile feel. These do end up being the second most expensive set of components in this build, but the ability to have physical buttons is what makes using a real buzzer system better than your phone, for instance. You can buy the switches along with the rest of the components from Mouser for about $1 each. If the thought of having keyboard keys on your buzzers is too revolting, you can always use a tactile / momentary switch instead. They are incredibly cheap (<$0.20), but might feel a little unsatisfying to use because of their small size. Nonetheless, this is one area where you can definitely get much cheaper, since a full set of basic switches will be about $2 while Cherry MX Switches and compatible keycaps will cost around $15. If you choose to use Cherry MX Switches, then you will also need a keycap to go along with it (please don't just press them without a keycap for the love of god). This [product listing](https://www.amazon.com/dp/B00FYO8EDC/ref=twister_B07BYVDWQ8?th=1) comes with exactly 10 Cherry MX Compatible keycaps, and according to the reviews they're of pretty alright quality.

Here's a link to a very cheap [switch](https://www.mouser.com/ProductDetail/Apem/MHPS2283?qs=%2Fs1LKTamv0woxsbKv1Ncmw%3D%3D)

# Cabling
In this design, USB Type A -> Type B Micro cables are used to connect the buzzers with the main controller. The reason why this is done is so that a single buzzer breaking won't render all of the other ones inoperable (as some daisy chained designs could be prone to)
Unfortunately, these cables also form a large part of the expense of the system if you are to buy all of them. If you are able to supply your own Type A -> Micro B cables (usually used for charging phones), then the project becomes much cheaper. This is by far the most expensive component in the project (>$20), however I would *strongly* recommend against trying to make your own cables. Sourcing thick enough wire for a low enough cost is a huge pain, and cutting it all to length and soldering it down takes a significant amount of time (especially if you plan to make the buzzers interchangeable). My first attempt to make buzzers involved extremely thin wire that got tanged at a moment's notice. The solder joints for such thin wire also become weak points, since the cable experiences the most mechanical stress out of any part of a buzzer system. For that reason, I *strongly, strongly* recommend you do not skimp out on wiring and just use USB cables and receptables, which are ubiquitous enough that you can get them for cheap without worrying about breaking it.

Regarding the length of the cables, the reference length is 6 feet (this is what Anderson provides for its buzzers). However, if you don't need that full length, you could also choose to do an arrangement like 6 3-feet cables + 4 6-foot cables or whatever you want. This is where the flexibility of using a standardized cable type comes into play.

# To PCB or not to PCB
In the original design, a small piece of perfboard was used to hold all the electronics in place. Unfortunately, this requires quite a bit of soldering, but with enough patience it's totally doable. If you want to go down this route, then just search up "perfboard" or "stripboard" on Amazon or AliExpress or some other electronics vendor and get the best deal you can find (these listings change rather often). Another approach is just to keep everything on a breadboard. This is also fine, and makes it exceedingly easy to disassemble your buzzer in the future, but it is a very impermanent solution. Instead, for this design, the recommended option is to use a PCB prototyping service like JLCPCB. Their services are insanely cheap ($2 for 5 boards), and even including shipping this would be about the same cost as a breadboard or set of perfboards on Amazon. Unfortunately, in order to get this price, these boards have to be manufactured in China, and so shipping can be quite a hassle. Currently, the cheapest option is $7 for 15-25 day delivery, which isn't too bad. The designs for the two boards used are both in the GitHub repository. 

The buzzer daughter boards have a panelized variant Gerber file, which combines 10 of the PCB onto a single 10 cm x 10 cm panel. The cost of any board under 10 cm x 10 cm is the same, and so you can essentially get 10x the number of boards for the same price, which is vastly more efficient. However, I haven't tried using sending these designs to a manufacturing company, so your mileage in getting them manufactured could vary.

# Creating a case
If you have a 3D Printer, there are STL files included in the Github repo (TODO: add these lul). The mounting holes and screws to close the plastic enclosure are all [... todo add this]. If you don't have a 3D printer, you can probably just create one out of wood or reuse another container to contain the board. However, it's probably still best if you use some sort of enclosure and don't leave the PCB completely exposed. Not only will this affect longevity, the materials used to create the boards include toxic heavy metals. 

# Powering the buzzers
Just use a standard phone charger and connect the Nano to the charger using the correct cable -- it'll work just fine.

# Things still left to do