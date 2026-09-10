// Address: 00468a70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

uint FUN_00468a70(int param_1,int param_2,undefined1 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  switch(param_3) {
  case 1:
    uVar1 = (uint)(*(int *)(param_1 + 0x44) < *(int *)(param_2 + 0x44));
    break;
  case 2:
    iVar2 = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x4c);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 <= *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x4c));
    break;
  case 3:
    uVar1 = (uint)(*(int *)(param_1 + 0x40) < *(int *)(param_2 + 0x40));
    break;
  case 4:
    iVar2 = *(int *)(param_2 + 0x40) + *(int *)(param_2 + 0x48);
    uVar1 = CONCAT31((int3)((uint)iVar2 >> 8),
                     iVar2 <= *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x48));
    break;
  case 6:
    uVar1 = (**(code **)(**(int **)(param_4 + -4) + 0xa4))(*(int **)(param_4 + -4),param_1,param_2);
  }
  return uVar1;
}

