#include <stdio.h>
#include <elf.h>

/**
 * print_elf_header - Prints the ELF header of an ELF file
 * @e_hdr: Pointer to the ELF header
 */
void print_elf_header(Elf64_Ehdr *e_hdr)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", e_hdr->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (e_hdr->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (e_hdr->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("  Version:                           %d (current)\n", e_hdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %d\n", e_hdr->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", e_hdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %d\n", e_hdr->e_type);
    printf("  Entry point address:               0x%lx\n", (unsigned long)e_hdr->e_entry);
    printf("  Start of program headers:          %ld (bytes into file)\n", (unsigned long)e_hdr->e_phoff);
    printf("  Start of section headers:          %ld (bytes into file)\n", (unsigned long)e_hdr->e_shoff);
    printf("  Flags:                             0x%lx\n", (unsigned long)e_hdr->e_flags);
    printf("  Size of this header:               %d (bytes)\n", e_hdr->e_ehsize);
    printf("  Size of program headers:           %d (bytes)\n", e_hdr->e_phentsize);
    printf("  Number of program headers:         %d\n", e_hdr->e_phnum);
    printf("  Size of section headers:           %d (bytes)\n", e_hdr->e_shentsize);
    printf("  Number of section headers:         %d\n", e_hdr->e_shnum);
    printf("  Section header string table index: %d\n", e_hdr->e_shstrndx);
}

int main(int argc, char **argv)
{
    FILE *file;
    Elf64_Ehdr e_hdr;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
        return (1);
    }

    file = fopen(argv[1], "rb");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return (1);
    }

    if (fread(&e_hdr, 1, sizeof(e_hdr), file) != sizeof(e_hdr))
    {
        fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
        fclose(file);
        return (1);
    }

    if (e_hdr.e_ident[EI_MAG0] != ELFMAG0 || e_hdr.e_ident[EI_MAG1] != ELFMAG1 ||
        e_hdr.e_ident[EI_MAG2] != ELFMAG2 || e_hdr.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        fclose(file);
        return (1);
    }

    print_elf_header(&e_hdr);

    fclose(file);
    return (0);
}
