// Address: 0045f718
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045f718(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_stack_00000004;
  undefined4 local_8;
  
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + -4) + 0x30);
  if (iVar1 != 0) {
    iVar3 = FUN_00469730(iVar1,in_stack_00000004);
    if (-1 < iVar3 + -1) {
      local_8 = 0;
      do {
        piVar4 = (int *)FUN_004696f4(iVar1,local_8);
        if (piVar4 != *(int **)(in_stack_00000004 + -4)) {
          cVar2 = FUN_00403c10(piVar4,PTR_PTR_0045adf8);
          if (cVar2 != '\0') {
            iVar5 = (**(code **)(*piVar4 + 0x3c))();
            if (iVar5 != 0) {
              uVar6 = (**(code **)(*piVar4 + 0x3c))();
              cVar2 = FUN_00403c10(uVar6,PTR_PTR_00472158);
              if (cVar2 != '\0') {
                iVar5 = (**(code **)(*piVar4 + 0x3c))();
                if (*(char *)(iVar5 + 0x95) != '\0') {
                  uVar6 = (**(code **)(*piVar4 + 0x3c))();
                  FUN_00472f44(uVar6,0);
                }
              }
            }
            (**(code **)(*piVar4 + 0xcc))(piVar4,0);
          }
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

