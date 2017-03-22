
Pod::Spec.new do |s|

s.name         = "JCustomView"
s.version      = "1.0.5"
s.summary      = "Fast iOS Develope App View"
s.description  = <<-DESC
JCustomView 开发时用的View类
DESC
s.homepage     = "https://github.com/GitHubZebra/JCustomView"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author       = { "陈杰" => "mr_banma@126.com" }
s.platform = :ios

s.ios.deployment_target = '8.0'

s.source       = { :git => "https://github.com/GitHubZebra/JCustomView.git", :tag => s.version }
s.source_files = "JCustomView/**/*.{h,m}"
s.requires_arc = true

s.dependency "SDWebImage"
s.dependency "JKit"

s.pod_target_xcconfig = { 'SWIFT_VERSION' => '3.0' }

end
