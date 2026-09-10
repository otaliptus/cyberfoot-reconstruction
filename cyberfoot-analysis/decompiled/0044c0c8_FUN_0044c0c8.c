// Address: 0044c0c8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044c0c8(int param_1,int param_2)

{
  if (DAT_0066cb20 == (HMODULE)0x0) {
    DAT_0066cb20 = LoadLibraryA("RICHED32.DLL");
    if (DAT_0066cb20 < (HMODULE)0x21) {
      DAT_0066cb20 = (HMODULE)0x0;
    }
  }
  FUN_0045cbe4(param_1,param_2);
  FUN_004697b8(param_1,param_2,"RICHEDIT");
  *(uint *)(param_2 + 4) =
       *(uint *)(param_2 + 4) | *(uint *)(&DAT_00662d1c + (uint)*(byte *)(param_1 + 0x230) * 4) |
       *(uint *)(&DAT_00662d24 + (uint)*(byte *)(param_1 + 600) * 4);
  *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffc;
  return;
}

