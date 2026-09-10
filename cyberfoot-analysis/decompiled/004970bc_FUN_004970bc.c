// Address: 004970bc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004970bc(int *param_1)

{
  int iVar1;
  
  do {
    if (param_1[0x68] == 0) {
      if (*(int *)(param_1[0x6e] + 0xc) == 0) {
        iVar1 = FUN_00497020(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_00496f0c(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    iVar1 = param_1[0x68];
    if (iVar1 < 0xcd) {
      if (iVar1 < 0xc5) {
        if (iVar1 < 0xc3) {
          if (iVar1 == 0xc2) {
            iVar1 = FUN_00495948(param_1,1,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
          else {
            if (iVar1 == 1) goto LAB_00497371;
            if (1 < iVar1 - 0xc0U) goto LAB_004973a1;
            iVar1 = FUN_00495948(param_1,0,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
        else {
          if (iVar1 == 0xc3) goto LAB_0049728b;
          if (iVar1 != 0xc4) goto LAB_004973a1;
          iVar1 = FUN_00496008(param_1);
          if (iVar1 == 0) {
            return 0;
          }
        }
      }
      else {
        switch(iVar1) {
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xcb:
LAB_0049728b:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x3c;
          *(int *)(iVar1 + 0x18) = param_1[0x68];
          (**(code **)*param_1)();
          break;
        case 0xc9:
          iVar1 = FUN_00495948(param_1,0,1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xca:
          iVar1 = FUN_00495948(param_1,1,1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xcc:
          iVar1 = FUN_00496e70(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        default:
LAB_004973a1:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x44;
          *(int *)(iVar1 + 0x18) = param_1[0x68];
          (**(code **)*param_1)();
        }
      }
    }
    else if (iVar1 < 0xdc) {
      if (iVar1 == 0xdb) {
        iVar1 = FUN_0049633c(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        switch(iVar1) {
        case 0xcd:
        case 0xce:
        case 0xcf:
          goto LAB_0049728b;
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
LAB_00497371:
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x5c;
          *(int *)(iVar1 + 0x18) = param_1[0x68];
          (**(code **)(*param_1 + 4))(param_1,1);
          break;
        case 0xd8:
          iVar1 = func_0x00495894(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          break;
        case 0xd9:
          *(undefined4 *)(*param_1 + 0x14) = 0x55;
          (**(code **)(*param_1 + 4))(param_1,1);
          param_1[0x68] = 0;
          return 2;
        case 0xda:
          iVar1 = FUN_00495cc8(param_1);
          if (iVar1 != 0) {
            param_1[0x68] = 0;
            return 1;
          }
          return 0;
        default:
          goto LAB_004973a1;
        }
      }
    }
    else if (iVar1 == 0xdc) {
      iVar1 = FUN_00496e70(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (iVar1 == 0xdd) {
      iVar1 = FUN_004965d8(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else if (iVar1 - 0xe0U < 0x10) {
      iVar1 = (**(code **)(param_1[0x6e] + -0x360 + param_1[0x68] * 4))(param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      if (iVar1 - 0xe0U != 0x1e) goto LAB_004973a1;
      iVar1 = (**(code **)(param_1[0x6e] + 0x1c))();
      if (iVar1 == 0) {
        return 0;
      }
    }
    param_1[0x68] = 0;
  } while( true );
}

