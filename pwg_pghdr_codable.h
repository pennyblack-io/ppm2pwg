CODABLE(PwgPgHdr)
  DEFAULT_STRING(64, PwgRaster, "PwgRaster")
  STRING(64, MediaColor)
  STRING(64, MediaType)
  STRING(64, PrintContentOptimize)
  PADDING(12)
  FIELD(uint32_t, CutMedia)
  FIELD(uint32_t, Duplex)
  FIELD(uint32_t, HWResolutionX)
  FIELD(uint32_t, HWResolutionY)
  PADDING(16)
  FIELD(uint32_t, InsertSheet)
  FIELD(uint32_t, Jog)
  FIELD(uint32_t, LeadingEdge)
  PADDING(12)
  FIELD(uint32_t, MediaPosition)
  FIELD(uint32_t, MediaWeightMetric)
  PADDING(8)
  FIELD(uint32_t, NumCopies)
  FIELD(uint32_t, Orientation)
  PADDING(4)
  FIELD(uint32_t, PageSizeX)
  FIELD(uint32_t, PageSizeY)
  PADDING(8)
  FIELD(uint32_t, Tumble)
  FIELD(uint32_t, Width)
  FIELD(uint32_t, Height)
  PADDING(4)
  FIELD(uint32_t, BitsPerColor)
  FIELD(uint32_t, BitsPerPixel)
  FIELD(uint32_t, BytesPerLine)
  FIELD(uint32_t, ColorOrder)
  FIELD(uint32_t, ColorSpace)
  PADDING(16)
  FIELD(uint32_t, NumColors)
  PADDING(28)
  FIELD(uint32_t, TotalPageCount)
  FIELD(int32_t, CrossFeedTransform)
  FIELD(int32_t, FeedTransform)
  FIELD(uint32_t, ImageBoxLeft)
  FIELD(uint32_t, ImageBoxTop)
  FIELD(uint32_t, ImageBoxRight)
  FIELD(uint32_t, ImageBoxBottom)
  FIELD(uint32_t, AlternatePrimary)
  FIELD(uint32_t, PrintQuality)
  PADDING(20)
  FIELD(uint32_t, VendorIdentifier)
  FIELD(uint32_t, VendorLength)
  PADDING(1088)
  PADDING(64)
  STRING(64, RenderingIntent)
  STRING(64, PageSizeName)
