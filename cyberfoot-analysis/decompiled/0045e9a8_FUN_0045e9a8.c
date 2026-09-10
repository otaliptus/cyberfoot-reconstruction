// Address: 0045e9a8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045e9a8(int *param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  uVar2 = *(ushort *)(iVar1 + 0x10);
  if ((*(uint *)(iVar1 + 0x10) & 0x1000) != 0) {
    uVar2 = uVar2 | 0x1000;
  }
  if ((*(uint *)(iVar1 + 0x10) & 0x20) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  FUN_0042b628(param_1[0x82],*(undefined4 *)(iVar1 + 0x18));
  FUN_0042b4a4(param_1[0x82],param_1[0x1a]);
  FUN_0042b4c0(param_1[0x82],param_1[0x5c]);
  if ((-1 < *(int *)(iVar1 + 8)) && ((uVar2 & 1) != 0)) {
    FUN_0042ab6c(*(undefined4 *)(param_1[0x82] + 0x14),0xff00000d);
    FUN_0042a3a0(*(undefined4 *)(param_1[0x82] + 0xc),0xff00000e);
  }
  if (*(int *)(iVar1 + 8) < 0) {
    FUN_0042af8c(param_1[0x82],iVar1 + 0x1c);
  }
  else {
    (**(code **)(*param_1 + 0x110))(param_1,*(int *)(iVar1 + 8),iVar1 + 0x1c,uVar2);
  }
  if ((uVar2 & 0x10) != 0) {
    DrawFocusRect(*(HDC *)(iVar1 + 0x18),(RECT *)(iVar1 + 0x1c));
  }
  FUN_0042b628(param_1[0x82],0);
  return;
}

