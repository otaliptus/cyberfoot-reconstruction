// Address: 0041aafc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0041aafc(int *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) == 0xff) {
    return *(undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
  }
  if (0xfd < *(byte *)(param_2 + 7)) {
    uVar2 = (**(code **)((int)(short)pcVar1 + *param_1))();
    return uVar2;
  }
  uVar2 = (*pcVar1)(param_1,*(undefined4 *)(param_2 + 0x10));
  return uVar2;
}

