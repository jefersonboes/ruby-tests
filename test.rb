
class Main
	def getName
		puts("name: ")
		name = gets()

		name = name[0, name.length() - 1]
		
		if name == "a"
			raise "Invalid name"
		end
		
		return name
	end
	
	def putName(name)
		#puts("name: #{name}")
		printf("%s", name)
	end
	
	def init
		method = Proc.new{getName}
		putName(method.call())
	end
end

#main = Main.new
#main.init
