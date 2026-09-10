// Address: 005ee48c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void TForm21_FormPaint(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *piStack_18;
  int local_8;
  
  piStack_18 = (int *)0x5ee49f;
  cVar1 = FUN_0040a43c("img\\f03.bmp");
  if (cVar1 != '\0') {
    piStack_18 = (int *)0x5ee4b3;
    piVar2 = (int *)FUN_0042fcb8(PTR_PTR_00429378,1);
    piStack_18 = (int *)0x5ee4c1;
    (**(code **)(*piVar2 + 0x4c))(piVar2,"img\\f03.bmp");
    for (local_8 = 0; local_8 < *(int *)(param_1 + 0x4c); local_8 = local_8 + iVar5) {
      for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x48); iVar5 = iVar5 + iVar4) {
        puStack_1c = (undefined1 *)0x5ee4d4;
        piStack_18 = piVar2;
        uVar3 = FUN_00481490(param_1);
        puStack_1c = (undefined1 *)0x5ee4de;
        FUN_0042ae64(uVar3,iVar5,local_8);
        piStack_18 = (int *)0x5ee4e5;
        iVar4 = (**(code **)(*piVar2 + 0x2c))();
      }
      piStack_18 = (int *)0x5ee4f3;
      iVar5 = (**(code **)(*piVar2 + 0x20))();
    }
    puStack_1c = &LAB_005ee51d;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    piStack_18 = (int *)&stack0xfffffffc;
    FUN_00403a84(piVar2);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

