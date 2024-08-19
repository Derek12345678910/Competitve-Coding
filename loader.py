import os

folders = ['comp', 'leetcode']

for folder_name in folders:

    folder_path = folder_name
    header_path = f"{folder_name}.h"

    with open(header_path, 'w') as header_file:
        header_file.write(f'#ifndef {folder_name.upper()}_H\n') 
        header_file.write(f'#define {folder_name.upper()}_H\n\n')

        for filename in os.listdir(folder_path):
            if filename.endswith('.cpp'):
                header_file.write(f'#include "{folder_path}/{filename}"\n')

        header_file.write('\n#endif\n')

    print(f"{header_path} has been generated.")