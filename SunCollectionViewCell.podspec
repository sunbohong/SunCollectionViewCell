Pod::Spec.new do |s|
s.name             = "SunCollectionViewCell"
s.version          = "0.1.0"
s.summary          = "A base Cell for IGListKit"

s.homepage         = "https://github.com/sunbohong/SunCollectionViewCell"
s.license          = 'MIT'
s.author           = { "酷酷的哀殿" => "sunbohong@gmail.com" }
s.source           = { :git => "https://github.com/sunbohong/SunCollectionViewCell.git", :tag => s.version.to_s }
s.social_media_url = 'https://github.com/sunbohong'

s.ios.deployment_target = '7.0'
s.tvos.deployment_target = '9.0'
s.requires_arc = true

s.source_files = 'Classes/*'

s.frameworks = 'UIKit'

end
