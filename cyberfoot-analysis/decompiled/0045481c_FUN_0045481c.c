// Address: 0045481c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_0045481c(uint param_1,int param_2)

{
  char cVar1;
  HWND pHVar2;
  uint uVar3;
  uint dwNewLong;
  int iVar4;
  int *in_FS_OFFSET;
  int in_stack_ffffffcc;
  int iVar5;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*(int *)(param_1 + 0x25c) == 0)) {
    puStack_18 = (undefined1 *)0x45484d;
    FUN_00454f14(param_1);
    puStack_1c = &LAB_00454911;
    iStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&iStack_20;
    iVar5 = -0x10;
    puStack_18 = &stack0xfffffffc;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    uVar3 = GetWindowLongA(pHVar2,iVar5);
    dwNewLong = uVar3 & 0xefffffff;
    iVar5 = -0x10;
    pHVar2 = (HWND)FUN_0046cae0(param_1);
    SetWindowLongA(pHVar2,iVar5,dwNewLong);
    iVar5 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xffffffd4;
    iVar4 = FUN_00454f60(param_1);
    if (param_2 < iVar4) {
      in_stack_ffffffcc = 0x4548b1;
      cVar1 = FUN_00454448(param_1,0x416,param_2,param_2);
      if (cVar1 != '\0') {
        FUN_00454448(param_1,0x415,param_2);
        in_stack_ffffffcc = param_2;
      }
    }
    *in_FS_OFFSET = in_stack_ffffffcc;
    iVar4 = -0x10;
    pHVar2 = (HWND)FUN_0046cae0(param_1,in_stack_ffffffcc,iVar5);
    uVar3 = SetWindowLongA(pHVar2,iVar4,uVar3);
    return uVar3;
  }
  return param_1 & 0xffffff00;
}

