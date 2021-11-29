Pod::Spec.new do |spec|
  spec.name = "SimpleNativeV2AdjustIOSSDK"
  spec.version="0.2.0"
  spec.summary= "Simple SDK V2 for include Adjust"
  spec.description= <<-DESC
  Simple SDK V2 for include Adjust, please includ the core sdk more
  DESC
  spec.homepage= 'https://github.com/bepic-games/SimpleNativeV2AdjustIOSSDK'
  spec.license= { :type => 'MIT', :file => 'LICENSE' }
  spec.author = { "yilang" => "yilang@bepic.cc" }
  spec.ios.deployment_target = "10.0"
  spec.source = { :git => "https://github.com/bepic-games/SimpleNativeV2AdjustIOSSDK.git", :tag => "#{spec.version}" }
  spec.source_files= 'SimpleNativeV2AdjustIOSSDK/*.{framework}/Headers/*.h'
  spec.vendored_frameworks = 'SimpleNativeV2AdjustIOSSDK/*.{framework}'
  spec.public_header_files = 'SimpleNativeV2AdjustIOSSDK/*.{framework}/Headers/*.h'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 armv7 armv7s ' }
  spec.dependency 'Adjust','4.29.3'
end
