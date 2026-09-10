// Address: 0048fb38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048fb38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c4);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  iVar3 = 0;
  iVar5 = -0x80;
  do {
    *(int *)(*(int *)(iVar1 + 0x10) + iVar3 * 4) = iVar5 * 0x166e9 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar1 + 0x14) + iVar3 * 4) = iVar5 * 0x1c5a2 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar1 + 0x18) + iVar3 * 4) = iVar5 * -0xb6d2;
    iVar4 = iVar5 * -0x581a;
    iVar5 = iVar5 + 1;
    *(int *)(*(int *)(iVar1 + 0x1c) + iVar3 * 4) = iVar4 + 0x8000;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return;
}

