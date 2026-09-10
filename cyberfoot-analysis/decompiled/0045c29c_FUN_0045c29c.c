// Address: 0045c29c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045c29c(int param_1,int param_2)

{
  FUN_0046988c(param_1,param_2);
  FUN_004697b8(param_1,param_2,&LAB_0045c350);
  *(uint *)(param_2 + 4) =
       *(uint *)(param_2 + 4) | 0xc0 |
       *(uint *)(&DAT_00662e98 + (uint)*(byte *)(param_1 + 0x20c) * 4) |
       *(uint *)(&DAT_00662eb0 + (uint)(*(char *)(param_1 + 0x20d) != '\0') * 4) |
       *(uint *)(&DAT_00662eb8 + (uint)*(byte *)(param_1 + 0x20e) * 4) |
       *(uint *)(&DAT_00662ec0 + (uint)*(byte *)(param_1 + 0x213) * 4) |
       *(uint *)(&DAT_00662ecc + (uint)*(byte *)(param_1 + 0x211) * 4) |
       *(uint *)(&DAT_00662ed4 + (uint)*(byte *)(param_1 + 0x212) * 4);
  if (((*PTR_DAT_0066b148 != '\0') && (*(char *)(param_1 + 0x1a5) != '\0')) &&
     (*(char *)(param_1 + 0x20c) == '\x01')) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xff7fffff;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}

