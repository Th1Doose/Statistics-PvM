##Search for:
self.__ProcessPreservedServerCommand()

##Add after:
	if app.__STATISTICS__:
		def ReceiveStatisticsPacket(self, xkb, xks, xkm):
			constInfo.STATISTICS = [int(xkb), int(xks), int(xkm),]

##Search for:
onPressKeyDict[app.DIK_F4]	= lambda : self.__PressQuickSlot(7)

##Add after:
		if app.__STATISTICS__:
			onPressKeyDict[app.DIK_F7]	= lambda : self.__statisticswindow__()

##Search for:
	def __PressNumKey(self,num):
		if app.IsPressed(app.DIK_LCONTROL) or app.IsPressed(app.DIK_RCONTROL):

##Add before:
	if app.__STATISTICS__:
		def Statistics(self):
			self.__statisticswindow__()

##Add at EOF:
	if app.__STATISTICS__:
		def __statisticswindow__(self):
			import uistatistics
			self.statistics = uistatistics.statisticschar()
			self.statistics.Show()
