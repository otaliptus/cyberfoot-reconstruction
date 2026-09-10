// Address: 00419eb8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00419eb8(int *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_2 + 0xc);
  if (((uint)pcVar2 & 0xffffff00) != 0) {
    if (*(byte *)(param_2 + 0xf) < 0xfe) {
      uVar1 = (*pcVar2)(param_1,*(undefined4 *)(param_2 + 0x10));
      return uVar1;
    }
    if (*(byte *)(param_2 + 0xf) != 0xff) {
      uVar1 = (**(code **)((int)(short)pcVar2 + *param_1))();
      return uVar1;
    }
    pcVar2 = (code *)(uint)*(byte *)(((uint)pcVar2 & 0xffffff) + (int)param_1);
  }
  return (uint)pcVar2 & 0xff;
}

