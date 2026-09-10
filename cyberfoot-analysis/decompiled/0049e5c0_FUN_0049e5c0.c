// Address: 0049e5c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049e5c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (param_2 == -1) {
      param_2 = 6;
    }
    if ((((param_2 < 0) || (9 < param_2)) || (param_3 < 0)) || (4 < param_3)) {
      uVar2 = 0xfffffffe;
    }
    else {
      if (((&PTR_FUN_00665c54)[param_2 * 3] != (&PTR_FUN_00665c54)[*(int *)(iVar1 + 0x84) * 3]) &&
         (*(int *)(param_1 + 8) != 0)) {
        uVar2 = FUN_0049e780(param_1,1);
      }
      if (param_2 != *(int *)(iVar1 + 0x84)) {
        *(int *)(iVar1 + 0x84) = param_2;
        *(uint *)(iVar1 + 0x80) = (uint)*(ushort *)(&DAT_00665c4e + param_2 * 0xc);
        *(uint *)(iVar1 + 0x8c) = (uint)*(ushort *)(&DAT_00665c4c + param_2 * 0xc);
        *(uint *)(iVar1 + 0x90) = (uint)*(ushort *)(&DAT_00665c50 + param_2 * 0xc);
        *(uint *)(iVar1 + 0x7c) = (uint)*(ushort *)(&DAT_00665c52 + param_2 * 0xc);
      }
      *(int *)(iVar1 + 0x88) = param_3;
    }
  }
  return uVar2;
}

