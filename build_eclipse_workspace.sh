mkdir eclipse
cd eclipse
mkdir workspace
cd ..
eclipse -nosplash -data eclipse/workspace/ -application org.eclipse.cdt.managedbuilder.core.headlessbuild -import Prototype/
