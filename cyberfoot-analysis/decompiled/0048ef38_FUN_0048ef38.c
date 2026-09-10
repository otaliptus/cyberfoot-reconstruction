// Address: 0048ef38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048ef38(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x1bc) = puVar1;
  *puVar1 = FUN_0048e284;
  iVar2 = 0;
  puVar1 = puVar1 + 0xb;
  do {
    iVar2 = iVar2 + 1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 4);
  puVar1 = (undefined4 *)
           (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  *(undefined4 **)(param_1 + 0xa0) = puVar1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x24); iVar2 = iVar2 + 1) {
    iVar3 = 0;
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
  }
  return;
}

