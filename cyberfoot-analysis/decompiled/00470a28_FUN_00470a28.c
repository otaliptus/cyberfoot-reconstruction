// Address: 00470a28
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00470a28(int param_1)

{
  int iVar1;
  HGDIOBJ pvVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    if (*(char *)(*(int *)(iVar1 + 0x14) + 0x10) == '\x01') {
      local_18 = FUN_0046ea5c(iVar1,2);
      local_14 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_14 < 0) {
        local_14 = local_14 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_14 = *(int *)(param_1 + 0x54) - local_14;
      local_10 = FUN_0046eac8(*(undefined4 *)(param_1 + 0x60),2);
      local_10 = local_10 + local_18;
      local_c = local_14 + *(int *)(param_1 + 0xc);
    }
    else {
      local_18 = (int)*(uint *)(param_1 + 0xc) >> 1;
      if (local_18 < 0) {
        local_18 = local_18 + (uint)((*(uint *)(param_1 + 0xc) & 1) != 0);
      }
      local_18 = *(int *)(param_1 + 0x50) - local_18;
      local_14 = FUN_0046ea5c(iVar1,1);
      local_10 = local_18 + *(int *)(param_1 + 0xc);
      local_c = FUN_0046eac8(*(undefined4 *)(param_1 + 0x60),1);
      local_c = local_c + local_14;
    }
    pvVar2 = (HGDIOBJ)FUN_0042aba0(*(undefined4 *)(param_1 + 0x10));
    pvVar2 = SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
    PatBlt(*(HDC *)(param_1 + 0x58),local_18,local_14,local_10 - local_18,local_c - local_14,
           0x5a0049);
    SelectObject(*(HDC *)(param_1 + 0x58),pvVar2);
  }
  return;
}

