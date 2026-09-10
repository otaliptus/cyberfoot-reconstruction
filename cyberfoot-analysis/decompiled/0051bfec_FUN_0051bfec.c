// Address: 0051bfec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051bfec(int param_1,int param_2,ushort param_3)

{
  short sVar1;
  
  sVar1 = FUN_0051bf1c(param_2);
  while( true ) {
    if ((*(uint *)(*(int *)(param_1 + 4) + sVar1 * 4) & 0xfffff000) == 0xfffff000) break;
    sVar1 = FUN_0051bf30();
  }
  *(int *)(*(int *)(param_1 + 4) + sVar1 * 4) = param_2 << 0xc | (int)(short)(param_3 & 0xfff);
  return;
}

